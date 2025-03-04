set terminal pngcairo size 1000,600 enhanced font "Arial,12"
set output '600.png'

# set title "Eval vs Distance"
set xlabel "Evaluations"
set ylabel "Distance in cm"
set xrange [0:3500]
set grid
set key left top

plot "rnd_6000a.data" using 1:2 with linespoints title "RA" lt rgb "red" pt 7 lw 3 dashtype '.', \
"ea_6000a.data" using 1:2 with linespoints title "EA" lt rgb "blue" pt 5 lw 2, \
6000 with lines title "Target 60m" lt rgb "green" lw 2 dashtype 4

