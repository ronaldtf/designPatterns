PROJECTDIR=$(PWD)/../

all: builder factoryMethod objectPool prototype singleton adapter1 adapter2 facade

builder:	
	cd ../src/creational/builder && make all
factoryMethod:
	@echo $(PWD)
	cd ../src/creational/factoryMethod && make all
objectPool:
	cd ../src/creational/objectPool && make all
prototype:
	cd ../src/creational/prototype && make all
singleton:
	cd ../src/creational/singleton && make all
adapter1:
	cd ../src/structural/adapter/method1 && make all
adapter2:
	cd ../src/structural/adapter/method2 && make all
facade:
	cd ../src/structural/facade && make all

clean:
	cd ../src/creational/builder && make clean
	cd ../src/creational/factoryMethod && make clean
	cd ../src/creational/objectPool && make clean
	cd ../src/creational/prototype && make clean
	cd ../src/creational/singleton && make clean
	cd ../src/structural/adapter/method1 && make clean
	cd ../src/structural/adapter/method2 && make clean
	cd ../src/structural/facade && make clean