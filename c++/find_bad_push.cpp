// General Info
// ------------
// For this bonus challenge, you will be implementing a bad-push detector: a
// program which reads a logfile and finds when the 5xx error-rate with at least
// 40 errors/hour.  It is to print the start time for when the error-rate is
// surpassed.
//
// Usage
// -----
// ::
//
//   find_bad_push LOGFILE
//
// LOGFILE
//   the logfile to read logs from, e.g. /var/log/myservice/access_log
//
// Result
// ------
// **find_bad_push** prints the timestamp for when the 5xx error-rate per hour
// is at least 40 **5xx** errors per hour.  Note that 40 errors in under an hour
// would also match this condition.
//
// If the threshold is not met in a one-hour period of the file then
// **find_bad_push** should print nothing and exit with error code 1.
//
// Notes
// -----
// You can use the example log file provided in /var/log/myservice/access_log to examine the
// file format and for initial testing development of your program::
//
//   $ ~/bin/find_bad_push /var/log/myservice/access_log
//   200000
//
//
// You can run the *try_find_bad_push* utility to test your program:
//
// #. either in normal mode with:
//
//     **/usr/local/bin/try_find_bad_push**
//
// #. or in verbose / debug mode with:
//
//     **/usr/local/bin/try_find_bad_push -v**
//
// Building
// --------
// To build, use the provided Makefile by running make::
//
//   $ make -C $HOME/c++
//
//
// Note: This will be done automatically by the try_find_bad_push script; this
//       ensures that we run the most recent version of your code.
//
// Pro-tip: start by running the following on the command-line (without the leading '$')
//
//   $ use c++ find_bad_push

int main(int argc, const char* argv[]) {
  return 0;
}
