# YADebloater
## Description
This is a debloater based on given input, code coverage and delta debugging, it automatically remove unnecessary code from c source file, and provides verify result.

## Requirements
- pycparserext https://github.com/inducer/pycparserext `python3 -m pip install pycparserext `
- ROPgadget https://github.com/JonathanSalwan/ROPgadget `python3 -m pip install ROPgadget`
- GadgetSetAnalyzer https://github.com/michaelbrownuc/GadgetSetAnalyzer
- pandas https://github.com/pandas-dev/pandas `python3 -m pip install pandas`
- pcre : needed to compile some test programs `apt-get install libpcre3 libpcre3-dev`
- radamsa https://gitlab.com/akihe/radamsa 
- tqdm `python3 -m pip install tqdm`
- colorlog `python3 -m pip install colorlog`
```
apt-get install gcc make git wget
git clone https://gitlab.com/akihe/radamsa.git && cd radamsa && make && sudo make install 
```
- gcc : needed to compile test programs

## Usage
1. Clone this repo
2. At ` Simple_debloater/python_deb/debloater ` , run ` ./run_prog_name.sh` 

## How does it work
todo...
