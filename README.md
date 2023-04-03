# Visionize

## Introduction

I'm trying to make the vast field of Computer Vision using C++ easier and more understandable using OpenCV library. In the way of doing so, I am going to implement a library which is extremely high-level and radically readable which you can use to focus on your product instead of code with a tricky language like C++.

## Mouse Callback Lessons

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

Furthermore, data is often an image which we can interpret in two ways. We have to cast it to __void__ and then we will cast them back into our callback with one of below ways.

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
