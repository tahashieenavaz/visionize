# Visionize

## Introduction

I'm trying to make the vast field of Computer Vision using C++ easier and more understandable using OpenCV library. In the way of doing so, I am going to implement a library which is extremely high-level and radically readable which you can use to focus on your product instead of code with a tricky language like C++.

## Mouse Callback Lessons

Every decent computer program needs to be able to interact with users somehow.

```cpp
static void function onMouse(int e, int x, int y, int flag, void* data) {
	cout << x << " , " << y << endl;
}

int main() {
	string key = "Mouse Interactions";

	// ...
	setMouseCallback(key, onMouse);
	// ...	

}
```
