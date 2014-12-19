CURDIR=$(shell pwd)

.PHONY: all clean

all:
	$(MAKE) -C src/ all; cd $(CURDIR)
	$(MAKE) -C test/ all; cd $(CURDIR)

clean:
	$(MAKE) -C src/ clean; cd $(CURDIR)
	$(MAKE) -C test/ clean; cd $(CURDIR)

dist-clean: 
	$(MAKE) -C src/ dist-clean; cd $(CURDIR)
	$(MAKE) -C test/ dist-clean; cd $(CURDIR)

