
for i in {10..24}
do 
	dire="abc0"$i;
	mkdir $dire;
	cd $dire;
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
