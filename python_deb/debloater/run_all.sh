mv benchmark_results benchmark_results_old
mkdir benchmark_results
python3 deb.py -s benchmark/small_progs/replace/replace.c -i benchmark/small_progs/replace
mv temp benchmark_results/replace
python3 deb.py -s benchmark/small_progs/tcas/tcas.c -i benchmark/small_progs/tcas
mv temp benchmark_results/tcas
python3 deb.py -s benchmark/grep/grep-2.19.c -i benchmark/grep 
mv temp benchmark_results/grep
python3 deb.py -s benchmark/date/date-8.21.c -i benchmark/date 
mv temp benchmark_results/date
python3 deb.py -s benchmark/gzip-1.2.4/gzip-1.2.4.c -i benchmark/gzip-1.2.4 
mv temp benchmark_results/gzip
python3 deb.py -s benchmark/bzip2/bzip2-1.0.5.c -i benchmark/bzip2 
mv temp benchmark_results/bzip2
python3 deb.py -s benchmark/uniq/uniq-8.16.c -i benchmark/uniq 
mv temp benchmark_results/uniq
