CURDIR=$(shell pwd)

.PHONY: all clean

all:
	$(MAKE) -C src/ all; cd $(CURDIR)
	$(MAKE) -C test/ all; cd $(CURDIR)

clean:
	$(MAKE) -C src/ clean; cd $(CURDIR)
	$(MAKE) -C test/ clean; cd $(CURDIR)
