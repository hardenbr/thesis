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

xetex:
	xelatex ${THESIS}
	xelatex ${THESIS}
	bibtex ${THESIS}
	xelatex ${THESIS}
	xelatex ${THESIS}

clean:
	rm -f tex/*aux tex/*bak thesis.blg thesis.bbl thesis.aux thesis.toc thesis.out thesis.lot thesis.lof thesis.log
