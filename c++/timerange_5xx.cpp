// General Info
// ------------
// For this challenge, you will be implementing a more complicated error counter:
// one which counts errors only during a particular period.
//
// Your task is to build a program that takes a LOGFILE, START time and END time
// and counts the number **5xx** errors between those times (inclusive of START,
// exclusive of END).
//
// Usage
// -----
// ::
//
//   timerange_5xx LOGFILE START END
//
// LOGFILE
//   the logfile to read logs from, e.g. /var/log/myservice/access_log
//
// START
//   the *HHMMSS*-formatted start time to begin filtering 5xx errors, e.g. 060000 (06:00:00am)
//
// END
//   the *HHMMSS*-formatted end time to stop filtering 5xx errors, e.g. 070000 (07:00:00am)
//
// Result
// ------
// **timerange_5xx** prints the number of "500"-family errors from that file.
// Often refered to as "5xx" errors, these are any error codes in the range of
// 500-599.
//
// **Note:** this is different than the 404 errors you looked for in the first
// challenge
//
// Notes
// -----
// You can use the example log file provided in /var/log/myservice/access_log to examine the
// file format and for initial testing development of your program::
//
//   $ ~/bin/timerange_5xx /var/log/myservice/access_log 030000 040000
//   9
//
//   $ ~/bin/timerange_5xx /var/log/myservice/access_log 041040 054547
//   6
//
// You can run the *try_timerange_5xx* utility to test your program:
//
// #. either in normal mode with:
//
//     **/usr/local/bin/try_timerange_5xx**
//
// #. or in verbose / debug mode with:
//
//     **/usr/local/bin/try_timerange_5xx -v**
//
// Building
// --------
// To build, use the provided Makefile by running make::
//
//   $ make -C $HOME/c++
//
//
// Note: This will be done automatically by the try_timerange_5xx script; this
//       ensures that we run the most recent version of your code.
//
// Pro-tip: start by running the following on the command-line (without the leading '$')
//
//   $ use c++ timerange_5xx

int main(int argc, const char* argv[]) {
  return 0;
}
