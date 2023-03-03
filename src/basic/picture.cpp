#include <iostream>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgcodecs/imgcodecs.hpp>
#include "../../shared/helpers.h"

using namespace std;
using namespace cv;

int main(int argc, char** argv) {
	string windowName = "Output";
	Mat image = imread(resource("img.jpg"));

	errorIf(image.empty(), "Couldn't load the image");

	namedWindow(windowName);
	imshow(windowName, image);
	waitKey(0);
	destroyWindow(windowName);

	return 0;
}
