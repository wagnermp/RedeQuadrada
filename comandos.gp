set terminal pdfcairo 
set output "Final.pdf"

set title "Relaxação"
set view map
splot "dados.dat" matrix with image 

set output
