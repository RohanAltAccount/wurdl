#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>
#include <cstdlib>
#include <ctime>

const int WORD_LENGTH = 5;
const int NOT_MATCH = 0;
const int PARTIAL_MATCH = 1;
const int MATCH = 2;

std::string getRandomWord()
{
    static const std::vector<std::string> words = {
        "array",
        "class",
        "stack",
        "queue",
        "scope",
        "float",
        "const",
        "union",
        "alias",
        "block",
        "ascii",
        "errno",
        "ioctl",
        "scala",
        "rustc",
        "swift",
        "golan",
        "print",
        "input",
        "scanf",
        "alloc",
        "frees",
        "opens",
        "close",
        "bytes",
        "cache",
        "heapq",
        "mmapd",
        "chmod",
        "chown",
        "mount",
        "umask",
        "httpd",
        "https",
        "fetch",
        "debug",
        "build",
        "patch",
        "merge",
        "split",
        "token",
        "parse",
        "lexer",
        "synct",
        "execs",
        "forks",
        "pipes",
        "event",
        "await",
        "async",
        "yield",
        "throw",
        "catch",
        "funct",
        "esrch",
        "while",
        "final",
        "types",
        "macro",
        "templ",
        "nodes",
        "graph",
        "edges",
        "index",
        "value",
        "param",
        "files",
        "paths",
        "roots",
        "loops",
        "logic",
        "conds",
        "flags",
        "words",
        "clock",
        "timer",
        "delay",
        "write",
        "reads",
        "sends",
        "recvs",
        "ports",
        "hosts",
        "proto",
        "codec",
        "frame",
        "deque",
        "lists",
        "tuple",
        "dicts",
        "sets",
        "bools",
        "doubl",
        "chars",
        "strng",
        "regex",
        "match",
        "joins",
        "mapfn",
        "filtr",
        "reduz",
        "sorts",
        "heaps",
        "trees",
        "tries",
        "dfsfn",
        "bfsfn",
        "visit",
        "trace",
        "logfn",                        
        "panic",
        "crash",
        "abort",
        "retry",
        "sleep",
        "waker",
        "sched",
        "thred",
        "mutex",
        "raise",
        "locks",
        "rlock",
        "ulock",
        "semph",
        "spawn",
        "joinr",
        "tasks",
        "futur",
        "proms"
    };
  static bool seeded = false;
    if (!seeded) {
        std::srand(static_cast<unsigned>(std::time(nullptr)));
        seeded = true;
    }

    return words[std::rand() % words.size()];
}

int main(int, char **)
{
    int numberOfTries = 6;
    std::vector<std::string> tries(numberOfTries);

    std::string target = getRandomWord();

    std::cout << target << std::endl;

    return 0;
}
