echo + [$(date "+%Y-%m-%d-%Hh%Mm%Ss")] $(pdfinfo thesis.pdf | grep Pages | tr -d "Pages: ") >> scripts/pages.md
python scripts/plot_pages.py
