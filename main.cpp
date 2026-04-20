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
    std::vector<std::string> wordBank = {
"ARRAY", "CLASS", "STACK", "QUEUE", "SCOPE", "FLOAT", "CONST", "UNION", "ALIAS", "BLOCK", "ASCII", "ERRNO", "QUERY", "IOCTL", "SCALA", "RUSTC", "SWIFT", "GOLAN", "PRINT", "INPUT", "SCANF", "ALLOC", "FREES", "OPENS", "CLOSE", "BYTES",
    "CACHE", "HEAPQ", "MMAPD", "CHMOD", "CHOWN", "MOUNT", "UMASK", "HTTPD", "HTTPS", "FETCH", "DEBUG", 
    "BUILD", "PATCH", "MERGE", "SPLIT", "TOKEN", "PARSE", "LEXER", "SYNCT",
    "EXECS", "FORKS", "PIPES", "EVENT", "AWAIT", "ASYNC", "YIELD", "THROW", "CATCH", "FUNCT", "ESRCH", "ELIFS", "WHILE", "FINAL", "TYPES", "MACRO", "TEMPL", "NODES", "GRAPH", "EDGES", "INDEX", "VALUE", "PARAM", "FILES", "PATHS", "ROOTS", "LOOPS", "LOGIC", "CONDS", "FLAGS", "WORDS", "CLOCK", "TIMER", "DELAY", "WRITE", "READS", "SENDS", "RECVS", "PORTS", "HOSTS", "PROTO", "CODEC", "FRAME", "DEQUE", "LISTS", "TUPLE", "DICTS", "SETS", "BOOLS", "DOUBL", "CHARS", "STRNG", "REGEX", "MATCH", "JOINS", "MAPFN", "FILTR", "REDUZ", "SORTS", "HEAPS", "TREES", "TRIES", "DFSFN", "BFSFN", "VISIT", "TRACE", "LOGFN", "PANIC", "CRASH", "ABORT", "RETRY", "SLEEP", "WAKER", "SCHED", "THRED", "MUTEX", "RAISE", "LOCKS", "RLOCK", "ULOCK", "SEMPH", "SPAWN", "JOINR", "TASKS", "FUTUR", "PROMS"

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
