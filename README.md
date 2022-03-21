To use the directory 
```
mkdir build
cd build
cmake ..
make 
make install
```

To load the library in a root session
```
root
gSystem->Load("libHelloWorld")
```

To load with macro 
```
R__LOAD_LIBRARY(libHelloWorld)
```

To run the executable from `build`, first ensure you have installed the `.so` file and `_rdict.pcm` by running `make install`. Then 
```
./executables/greet
```

If you chose to install `greet`, and `~/bin` is in your path, you can also simply do 
```
greet
```
from anywhere.