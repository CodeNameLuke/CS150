#pragma once
template <typename T>

T maximum(T value1, T value2, T value3) {

	T maximum = value1;

	if (value2 > maximum) {

		maximum = value2;

	}

	if (value3 > maximum) {

		maximum = value3;

	}

	return maximum;

}
