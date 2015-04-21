export TEXINPUTS := .//:./style//:sections//:${TEXINPUTS}
export BIBINPUTS := .//:./bibs//:${TEXINPUTS}
THESIS = thesis

all:
	pdflatex ${THESIS}
	pdflatex ${THESIS}
	bibtex ${THESIS}
	pdflatex ${THESIS}
	pdflatex ${THESIS}

pages:
	pdflatex ${THESIS}
	pdflatex ${THESIS}
	bibtex ${THESIS}
	pdflatex ${THESIS}
	pdflatex ${THESIS}
	clear
	du -hs
	ls -ltrh
	acroread ${THESIS}.pdf &
	sh scripts/pages.sh
	git status

nopages:
	pdflatex ${THESIS}
	pdflatex ${THESIS}
	bibtex ${THESIS}
	pdflatex ${THESIS}
	pdflatex ${THESIS}
	clear
	du -hs
	ls -ltrh
	acroread ${THESIS}.pdf &
	git status

