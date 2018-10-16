// General Info
// ------------
// For this challenge, you're going to be implementing a parser with sorting.
//
// Your task is to build a program that
// 1. takes a logfile to read
// 2. counts the number of **200** (success) codes by hour
// 3. outputs a list of hours and counts, ordered by success count low to high
//
// Usage
// -----
// ::
//
//   histogram LOGFILE
//
// LOGFILE
//   The path to the logfile to be inspected
//
// Result
// ------
// Prints a two-column list to stdout, each line should be formatted with a
// two-digit hour, followed by a space, followed by the numeric count.
//
// The list should be sorted in order by count, lowest to highest.
//
// Notes
// -----
// You can use the example log file provided in /var/log/myservice/access_log to examine the
// file format and for initial testing development of your program::
//
//   $ ~/bin/histogram /var/log/myservice/access_log
//   00 0
//   ...
//   23 0
//   14 1
//   16 1
//   19 1
//   15 2
//   17 3
//   10 4
//   12 4
//   13 4
//
// You can run the *try_histogram* utility to test your program:
//
// #. either in normal mode with::
//
//     /usr/local/bin/try_histogram
//
// #. or in verbose / debug mode with::
//
//     /usr/local/bin/try_histogram -v
//
//
// Tips
// ----
// Please be sure to name your program **~/bin/histogram**
// (with no extension), and make your program executable.
//
// Get a simple solution working first, then go back and add error checking,
// argument parsing, etc.
//
// Building
// --------
// To build, use the provided Makefile by running make::
//
//   $ make -C $HOME/c++
//
//
// Note: This will be done automatically by the try_histogram script; this
//       ensures that we run the most recent version of your code.
//
// Pro-tip: start by running the following on the command-line (without the leading '$')
//
//   $ use c++ histogram

int main(int argc, const char* argv[]) {
  return 0;
}
