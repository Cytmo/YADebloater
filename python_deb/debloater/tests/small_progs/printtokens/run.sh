clang -o pr -fprofile-instr-generate -fcoverage-mapping printtokens.c
all:
	clang -o pr -fprofile-instr-generate -fcoverage-mapping printtokens.c
data:
	llvm-profdata merge -o pr.profdata default.profraw
	llvm-cov export -format=lcov ./pr -instr-profile=pr.profdata pr.profdata