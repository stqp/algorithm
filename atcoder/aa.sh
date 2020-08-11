
for i in {25..99}
do 
	cd "abc0"$i;
	mkdir a b c d;
	cd a;
	touch main.go;
	cd ../b;
	touch main.go;
	cd ../c;
	touch main.go;
	cd ../d;
	touch main.go;
	cd ../../;
done
