echo "building project_01"
echo "-------------------"
cd build
cmake ..
make

echo "build is done .."
echo "running adhoc test now"
ctest

echo "Executed test suite.."
