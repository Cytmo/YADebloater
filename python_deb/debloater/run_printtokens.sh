export GCOV_PREFIX=temp
export GCOV_PREFIX_STRIP=5
# python3 deb.py -i ../gzip-1.2.4/inputs/input -s ./gzip-1.2.4.c.origin.c
python3 deb.py -s tests/small_progs/printtokens/printtokens.c -i tests/small_progs/printtokens