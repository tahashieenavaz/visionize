cv::Scalar averageColor(cv::Mat image, int x, int y, int kernel = 9) {
	int factor = kernel / 2;
	int startx = max(0, x - factor);
	int starty = max(0, y - factor);
	int endx = min(image.cols - 1, x - factor);
	int endy = min(image.rows - 1, y - factor);
	Mat roi = image(Rect(startx, starty, endx - startx + 1, endy - starty + 1));
	return cv::mean(roi);
}
