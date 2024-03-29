# Visionize

## Introduction

I'm trying to make the vast field of Computer Vision using C++ easier and more understandable using OpenCV library. In the way of doing so, I am going to implement a library which is extremely high-level and radically readable which you can use to focus on your product instead of code with a tricky language like C++.

- [Mouse Interactions](#mouse-interaction)
- [Average Color](#average-color-on-roi-region-of-interest)
- [Euclidean Distance](#euclidean-distance)

## Mouse Interaction

Every decent computer program needs to be able to interact with users somehow.

```cpp
static void function onMouse(int event, int x, int y, int flag, void* data) {
	cout << x << " , " << y << endl;
}

int main() {
	string key = "Mouse Interactions";

	// ...
	setMouseCallback(key, onMouse);
	// ...

}
```

Furthermore, data is often an image which we can interpret in two ways. We have to cast it to **void** and then we will cast them back into our callback with one of below ways.

```cpp
static void function onMouse(int event, int x, int y, int flag, void* data);

int main() {
	Mat image = imread("image.jpg");
	string key = "Mouse Interactions";

	// ...
	setMouseCallback(key, onMouse, (void*) &image);
	// ...

}

static void function onMouse(int event, int x, int y, int flag, void* data) {
	// Getting image instance as a pointer
	Mat* image = (Mat*)data;

	// Getting it as a regular object
	Mat image = *(Mat*)data;
}
```

## Average Color on ROI (Region of Interest)

Of the many problems programmers face when working with images is to calculate the average color of a vicinity (maybe a clicked position) and for that matter we need a few things which can be very confusing. We will select a **ROI** (Region of Interest) and after that we use OpenCV's **mean** function to get a Scalar object.

```cpp
int main() {
	Mat image = imread("image.jpg");
	Mat roi = image(Rect(20, 20, 20, 20));
	Scalar average = mean(roi);
	// ...
}
```

## Euclidean Distance

In some cases, for example generating a mask, we need to calculate the distance between two Scalar or Vec3b objects. You may have come across the term Euclidean Distance which is easy to calculate using OpenCV.

```cpp
int main() {
	Ve3b first = getClickedPoint();
	Ve3b second = getPoint(244, 45);
	double distance = norm(first, second, NORM_L2);
	cout << distance << endl;
	// ...
}
```
