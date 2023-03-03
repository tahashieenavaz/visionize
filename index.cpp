#include <iostream>

#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgcodecs/imgcodecs.hpp>

#include "helpers.h"

using namespace std;
using namespace cv;

int main(int argc, char** argv) {
	Mat image = imread(resource("img.jpg"));

	if(image.empty()) {
		return error("Couldn't load the image");
	}

	namedWindow("Output");
	imshow("Output", image);
	waitKey(0);
	destroyWindow("Output");

	return 0;
}

