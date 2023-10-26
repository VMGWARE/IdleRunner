#include <iostream> // For std::cout, std::cerr, std::endl
#include <fstream> // For reading the config file
#include <ctime> // For getting the current time
#include <unistd.h> // For getting the current working directory
#include <getopt.h> // For command-line option parsing

// Namespaces
using namespace std;

// Configuration
const std::string CONFIG_FILE_PATH = "/path/to/config.conf";
const std::string USER_ACTIVITY_LOG = "/tmp/user_activity.log";
const int DEFAULT_IDLE_MINUTES = 5;