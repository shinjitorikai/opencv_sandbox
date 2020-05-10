CXX = c++
CXXFLAGS =  -I/usr/local/include/opencv4/
LDFLAGS = -L/usr/local/opt/opencv/lib/
LDLIBS =  -lopencv_core -lopencv_highgui -lopencv_imgcodecs
CXXVERSION = -std=c++11

main: OpenCVRunJikken.cpp
	$(CXX) $< -o $@ $(CXXFLAGS) $(CXXVERSION) $(LDFLAGS) $(LDLIBS)

clean :
	rm main
