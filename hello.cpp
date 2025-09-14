// #include <iostream>
// #include <vector>
// using namespace std;

// // Function to find all indexies of a key in the array
// vector<int> findAllIndexies(const vector<int>& arr, int key) {
//     vector<int> indices;
//     for (int i = 0; i < arr.size(); i++) {
//         if (arr[i] == key)
//             indices.push_back(i); }
//     return indices;}
// // Test function
// void testFindAllIndexies() {
//     vector<int> arr1 = {1, 2, 3, 2, 4, 2};
//     vector<int> arr2 = {5, 6, 7};
//     vector<int> arr3 = {};
//     // Test 1: Multiple occurences
//     vector<int> res1 = findAllIndexies(arr1, 2);
//     cout << "The indexies of 2 in arr1 are: ";
//     for (int i : res1) cout << i << " ";//index displayed
//     cout << endl;
//     // Test 2: no occurence
//     vector<int> res2 = findAllIndexies(arr2, 10);
//     cout << "Looking for 10 in arr2: ";
//     for (int i : res2) cout << i << " ";
//     cout << "(not present in this array)" << endl;//no occurence message displayed
//     // Test 3: given array is empty
//     vector<int> res3 = findAllIndexies(arr3, 1);
//     cout << "Trying to find something in empty array: ";
//     for (int i : res3) cout << i << " ";
//     cout << "(empty obviously)" << endl;//empty message displayed
//     }
// int main() {
//     cout << "Testing findAllIndexies function...\n\n";
//     testFindAllIndexies();
//     cout << "\nAll tests done\n";
//     return 0;
// }



#include <iostream>
#include <string>
using namespace std;

// Function to find first occurrence of pattern in text
int findPattern(const string& text, const string& pattern) {
    if (pattern.empty()) return -1; // handle empty pattern

    for (int i = 0; i <= text.size() - pattern.size(); i++) {
        bool found = true;
        for (int j = 0; j < pattern.size(); j++) {
            if (text[i + j] != pattern[j]) {
                found = false;
                break;
            }
        }
        if (found) return i; // return the first match
    }
    return -1; // not found
}

// Test function
void testFindPattern() {
    string text1 = "hello world";
    string text2 = "this is a test string";
    string text3 = "abcdef";
    string text4 = "pattern";

    //  Pattern at the beginning
    cout << "Test 1 - pattern at beginning: ";
    int res1 = findPattern(text1, "hell");
    cout << "found at index: " << res1 << endl;

    //  Pattern at the end
    cout << "Test 2 - pattern at end: ";
    int res2 = findPattern(text2, "string");
    cout << "found at index: " << res2 << endl;

    // Pattern not present
    cout << "Test 3 - pattern not present: ";
    int res3 = findPattern(text3, "xyz");
    if (res3 == -1) cout << "pattern not found " << endl;
    else cout << "found at index: " << res3 << endl;

    //  Empty pattern
    cout << "Test 4 - empty pattern: ";
    int res4 = findPattern(text4, "");
    if (res4 == -1) cout << "empty pattern, nothing to find" << endl;
    else cout << "found at index: " << res4 << endl;
}

int main() {
//calling funct
    testFindPattern();
    cout << "\nAll string pattern tests done\n";
    return 0;
}
