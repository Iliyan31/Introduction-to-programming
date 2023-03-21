#pragma once
#include <iostream> 

// Task 1

bool valid(const int arr[], const int& size) {
	if (size <= 0 || size>63) return false;
	for (int i = 0; i < size; i++) {
		if (arr[i] < -2222 || arr[i]>2222) return false;
	}
	return true;
}

int maxGroup(const int arr[], const int& size) {
	if (!valid(arr, size)) return -1;

	int indexFrist = 0;
	int indexSecond = 0;
	int max = 0;

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (arr[i] * arr[j] > max && i!=j) {
				max = arr[i] * arr[j];
				indexFrist = i;
				indexSecond = j;
			}
		}
	}

	int sum = 0;
	for (int i = 0; i < size; i++) {
		if (i != indexFrist && i != indexSecond) {
			sum += arr[i];
		}
	}
	return sum + max;
}


// Task 4
//bool validation(char* str, char* s, const int& N) {
//	if (str == nullptr || s == nullptr) return false;
//	if (N <= 0) return false;
//	return true;
//}
//
//bool operations(char* str, char* s, const int& N) {
//	if (!validation(str, s, N)) return false;
//
//	int operations = 0;
//	
//	for(int i=0; i<)
//
//}

#include <vector>
#include <utility>

bool check(const std::vector<std::pair<int, int>> vec) {
	for (int i = 0; i < vec.size(); i++) {
		if (vec[i].second > 2) return false;
	}
	return true;
}

void minimumBribes(std::vector<int> q) {
	std::vector<std::pair<int, int>> vec;
	int index = 0;
	int bribes = 0;
	for (int i = 0; i < q.size(); i++) {
		if (index > q[i]) bribes++;
		if (index < q[i] || i == q.size()-1) {
			if (bribes > 0) {
				std::pair<int, int> p;
				p.first = index;
				p.second = bribes;
				vec.push_back(p);
				bribes = 0;
			}
			index = q[i];
		}
	}
	for (int i = 0; i < q.size(); i++) {
		if (index > q[i]) bribes++;
		if (index < q[i] || i == q.size() - 1) {
			if (bribes > 0) {
				std::pair<int, int> p;
				p.first = index;
				p.second = bribes;
				vec.push_back(p);
				bribes = 0;
			}
			index = q[i];
		}
	}
	if (!check(vec)) std::cout << "Too chaotic";
	else {
		int sum = 0;
		for (int i = 0; i < vec.size(); i++) {
			sum += vec[i].second;
		}
		std::cout << sum;
	}
}
