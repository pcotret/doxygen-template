all:
	doxygen Doxyfile
	hhc doc/html/index.hhp
clean_all:
	rm -rf doc/