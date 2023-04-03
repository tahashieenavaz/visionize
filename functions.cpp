/**
 * It takes an image, a point, and a kernel size, and returns the average color of the pixels in the
 * kernel around the point
 * 
 * @param image The image to get the average color from
 * @param x x coordinate of the pixel
 * @param y The y coordinate of the pixel.
 * @param kernel The size of the kernel to use.
 * 
 * @return The average color of the image.
 */
cv::Scalar averageColor(cv::Mat image, int x, int y, int kernel = 9) {
	int factor = kernel / 2;
	int startx = std::max(0, x - factor);
	int starty = std::max(0, y - factor);
	int endx = std::min(image.cols - 1, x - factor);
	int endy = std::min(image.rows - 1, y - factor);
	cv::Mat roi = image(cv::Rect(startx, starty, endx - startx + 1, endy - starty + 1));
	return cv::mean(roi);
}
