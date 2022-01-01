# auto build

# make dir
echo "Setting up Build Environment"
mkdir build &> /dev/null
cd build

# build
echo "Configuring and Building Project Files"
cmake ..
make

# move and run file
echo "Moving and Running Project files"
rm ../tinker02 &> /dev/null
mv tinker02 ..
cd ..
./tinker02