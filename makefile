prefix := $(shell pwd)
bindir=$(prefix)/bin
doc=$(prefix)/doc
src=$(prefix)/src

CC=gcc
CFLAGS= 
LDFLAGS= `sdl-config --libs --cflags`

BINS=Fractale
OBJ= $(src:.c=.o)

all: $(BINS)
	mkdir -p $(prefix)
	mkdir -p $(bindir)
	for j in $(BINS); do mv $$j $(bindir)/; done
	for k in '*.o'; do mv $$k $(bindir)/; done
	for i in $(src)/'*.jpg'; do cp $$i $(bindir)/; done
	for i in $(src)/'*.ogv'; do cp $$i $(bindir)/; done
	for i in $(src)/'*.txt'; do cp $$i $(bindir)/; done

Fractale: IFS.o lsystem.o main.o chargement.o configSDL.o Mandelbrot.o Flame.o
	$(CC) -o $@ $^ $(LDFLAGS)

IFS.o: $(src)/IFS.c $(src)/IFS.h
	$(CC) -o $@ -c $< $(CFLAGS)

lsystem.o: $(src)/lsystem.c $(src)/lsystem.h
	$(CC) -o $@ -c $< $(CFLAGS)

configSDL.o: $(src)/configSDL.c $(src)/configSDL.h
	$(CC) -o $@ -c $< $(CFLAGS)

chargement.o: $(src)/chargement.c $(src)/chargement.h
	$(CC) -o $@ -c $< $(CFLAGS)

Flame.o: $(src)/Flame.c $(src)/Flame.h
	$(CC) -o $@ -c $< $(CFLAGS)

Mandelbrot.o: $(src)/Mandelbrot.c $(src)/Mandelbrot.h
	$(CC) -o $@ -c $< $(CFLAGS)

main.o: $(src)/prog.c $(src)/prog.h
	$(CC) -o $@ -c $< $(CFLAGS)

clean:
	rm -f $(bindir)/*.o

very-clean: clean
	rm -f $(bindir)/$(BINS)
	rm -rf $(bindir)
	rm -rf  $(doc)/* 
	rm -rf $(doc)

doc:
	mkdir -p $(doc)
	#doxygen -g Doxyfile #générer un fichier de configuration
	doxygen $(prefix)/Doxyfile #générer la documentation a partir du fichier nommé Doxyfile




	

