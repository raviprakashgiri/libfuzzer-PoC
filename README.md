# libfuzzer-PoC
This is a simple example to show how to run libfuzzer to find memory related bugs.

We are assuming that you have already installed libfuzzer in your system or have clang-6.0+ (comes with libfuzzer).

Steps to run:
1) keep all 4 files (foo.h, foo.cpp. bar.cpp) in the same directory.
2) foo.cpp, bar.cpp and foo.h are three original source files which are the target of libfuzzer.
3) As it has been mentioned in the documentation of libfuzzer, we will create another cc file(test_buffer.cc) and call the the function `LLVMFuzzerTestOneInput` from it. 
4) Now, compile all these as follows:
clang++ -fsanitize=address -fsanitize-coverage=trace-pc-guard test_buffer.cc *.cpp -o fuzzer libFuzzer.a
5) Step 4 will generate fuzzer binary. Run it as ./fuzzer
