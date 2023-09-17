# Terminal Function Usage

## access (man 2 access)
- Check file access permissions.
- Usage: `int access(const char *path, int mode);`

## chdir (man 2 chdir)
- Change the current working directory.
- Usage: `int chdir(const char *path);`

## close (man 2 close)
- Close a file descriptor.
- Usage: `int close(int fd);`

## closedir (man 3 closedir)
- Close a directory stream.
- Usage: `int closedir(DIR *dirp);`

## execve (man 2 execve)
- Execute a program.
- Usage: `int execve(const char *pathname, char *const argv[], char *const envp[]);`

## exit (man 3 exit)
- Terminate the current process.
- Usage: `void exit(int status);`

## _exit (man 2 _exit)
- Terminate the current process without cleanup.
- Usage: `void _exit(int status);`

## fflush (man 3 fflush)
- Flush a stream.
- Usage: `int fflush(FILE *stream);`

## fork (man 2 fork)
- Create a new process by duplicating the current process.
- Usage: `pid_t fork(void);`

## free (man 3 free)
- Deallocate memory.
- Usage: `void free(void *ptr);`

## getcwd (man 3 getcwd)
- Get the current working directory.
- Usage: `char *getcwd(char *buf, size_t size);`

## getline (man 3 getline)
- Read a line from a file stream.
- Usage: `ssize_t getline(char **lineptr, size_t *n, FILE *stream);`

## getpid (man 2 getpid)
- Get the process ID of the current process.
- Usage: `pid_t getpid(void);`

## isatty (man 3 isatty)
- Check if a file descriptor refers to a terminal.
- Usage: `int isatty(int fd);`

## kill (man 2 kill)
- Send a signal to a process.
- Usage: `int kill(pid_t pid, int sig);`

## malloc (man 3 malloc)
- Allocate memory.
- Usage: `void *malloc(size_t size);`

## open (man 2 open)
- Open or create a file.
- Usage: `int open(const char *pathname, int flags, mode_t mode);`

## opendir (man 3 opendir)
- Open a directory stream.
- Usage: `DIR *opendir(const char *name);`

## perror (man 3 perror)
- Print an error message.
- Usage: `void perror(const char *s);`

## read (man 2 read)
- Read data from a file descriptor.
- Usage: `ssize_t read(int fd, void *buf, size_t count);`

## readdir (man 3 readdir)
- Read the next directory entry.
- Usage: `struct dirent *readdir(DIR *dirp);`

## signal (man 2 signal)
- Set the handling of a signal.
- Usage: `void (*signal(int signum, void (*handler)(int)))(int);`

## stat (__xstat) (man 2 stat)
- Get file status information.
- Usage: `int stat(const char *pathname, struct stat *buf);`

## lstat (__lxstat) (man 2 lstat)
- Get file status information (for symbolic links).
- Usage: `int lstat(const char *pathname, struct stat *buf);`

## fstat (__fxstat) (man 2 fstat)
- Get file status information for a file descriptor.
- Usage: `int fstat(int fd, struct stat *buf);`

## strtok (man 3 strtok)
- Split a string into tokens.
- Usage: `char *strtok(char *str, const char *delim);`

## wait (man 2 wait)
- Wait for a child process to terminate.
- Usage: `pid_t wait(int *status);`

## waitpid (man 2 waitpid)
- Wait for a specific child process to terminate.
- Usage: `pid_t waitpid(pid_t pid, int *status, int options);`

## wait3 (man 2 wait3)
- Wait for a child process to terminate and retrieve its status.
- Usage: `pid_t wait3(int *status, int options, struct rusage *rusage);`

## wait4 (man 2 wait4)
- Wait for a specific child process to terminate and retrieve its status.
- Usage: `pid_t wait4(pid_t pid, int *status, int options, struct rusage *rusage);`

## write (man 2 write)
- Write data to afile descriptor.
- Usage: `ssize_t write(int fd, const void *buf, size_t count);`
