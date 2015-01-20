
SUBDIRS := emodel IO util

GATELIBDIR := lib

GATEINCDIR := include

GATEDOCDIR := doc


.phony: all clean

all:
	@mkdir -p $(GATELIBDIR)
	@for i in $(SUBDIRS); do ( echo "" && echo "Compiling $$i..." && cd $$i && $(MAKE) ) || exit $$?; done
	@mkdir -p $(GATEINCDIR)
	@for i in $(SUBDIRS); do ( cd $(GATEINCDIR) && ln -sf -t ./  ../$$i/*.h ) || exit $$?; done

clean:
	@for i in $(SUBDIRS); do ( echo "" && echo "Cleaning $$i..." && cd $$i && $(MAKE) clean ) || exit $$?; done
	@rm -f $(GATELIBDIR)/lib/lib*.so

doxygen:
	@echo 'dOxygenising GATE...'
	@mkdir -p $(GATEDOCDIR)/dOxygenGATE
	@doxygen $(GATEDOCDIR)/doxygenGATE.script
	@ln -sf $(GATEDOCDIR)/dOxygenGATE/html/index.html doxygenisedGATE.html	
