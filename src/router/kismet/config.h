/* config.h.  Generated by configure.  */
/* config.h.in.  Generated from configure.in by autoheader.  */

/* system binary directory */
#define BIN_LOC "/tmp/kismet/bin"

/* Build curses-based UI */
/* #undef BUILD_CURSES */

/* Build panel UI */
/* #undef BUILD_PANEL */

/* AssumeDefaultColors present */
/* #undef HAVE_ASSUME_DEFAULT_COLORS */

/* Define to 1 if you have the <errno.h> header file. */
#define HAVE_ERRNO_H 1

/* Expat XML library */
/* #undef HAVE_EXPAT */

/* Define to 1 if you have the <getopt.h> header file. */
#define HAVE_GETOPT_H 1

/* system defines getopt_long */
#define HAVE_GETOPT_LONG 1

/* Define to 1 if you have the `gettimeofday' function. */
#define HAVE_GETTIMEOFDAY 1

/* GMP math library */
/* #undef HAVE_GMP */

/* GPS support will be built. */
#undef HAVE_GPS 

/* Imagemagick image library */
/* #undef HAVE_IMAGEMAGICK */

/* inttypes.h is present */
#define HAVE_INTTYPES_H 1

/* Curses terminal lib */
/* #undef HAVE_LIBCURSES */

/* NCurses terminal lib */
/* #undef HAVE_LIBNCURSES */

/* Panel terminal lib */
/* #undef HAVE_LIBPANEL */

/* libpcap packet capture lib */
#define HAVE_LIBPCAP 1

/* Ethereal wiretap library */
/* #undef HAVE_LIBWIRETAP */

/* Libz compression lib */
/* #undef HAVE_LIBZ */

/* Linux netlink socket capture present */
/* #undef HAVE_LINUX_NETLINK */

/* Linux wireless extentions present */
/* #undef HAVE_LINUX_WIRELESS */

/* Linux wireless extentions v22 or better present */
/* #undef HAVE_LINUX_WIRELESS22 */

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have the `memset' function. */
#define HAVE_MEMSET 1

/* pcap/pcap.h */
/* #undef HAVE_PCAPPCAP_H */

/* libpcap header */
/* #undef HAVE_PCAP_H */

/* Nonblocking-capable libpcap */
/* #undef HAVE_PCAP_NONBLOCK */

/* pthread threading library */
#define HAVE_PTHREAD 1

/* radiotap packet headers */
/* #undef HAVE_RADIOTAP */

/* Define to 1 if you have the `select' function. */
#define HAVE_SELECT 1

/* Define to 1 if you have the `socket' function. */
#define HAVE_SOCKET 1

/* accept() takes type socklen_t for addrlen */
#define HAVE_SOCKLEN_T 1

/* Define to 1 if `stat' has the bug that it succeeds when given the
   zero-length file name argument. */
#define HAVE_STAT_EMPTY_STRING_BUG 1

/* stdint.h is present */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the `strcasecmp' function. */
#define HAVE_STRCASECMP 1

/* Define to 1 if you have the `strftime' function. */
#define HAVE_STRFTIME 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the `strstr' function. */
#define HAVE_STRSTR 1

/* setuid capable */
/* #undef HAVE_SUID */

/* System headers are there */
#define HAVE_SYSHEADERS 1

/* Define to 1 if you have the <sys/socket.h> header file. */
#define HAVE_SYS_SOCKET_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/time.h> header file. */
#define HAVE_SYS_TIME_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <sys/wait.h> header file. */
#define HAVE_SYS_WAIT_H 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Viha headers are there */
/* #undef HAVE_VIHAHEADERS */

/* Define to 1 if you have the <WiFi/IEEE80211Frame.h> header file. */
/* #undef HAVE_WIFI_IEEE80211FRAME_H */

/* Define to 1 if you have the <WiFi/WFException.h> header file. */
/* #undef HAVE_WIFI_WFEXCEPTION_H */

/* Define to 1 if you have the <WiFi/WLFrame.h> header file. */
/* #undef HAVE_WIFI_WLFRAME_H */

/* Define to 1 if you have the <WiFi/WLPacketSource.h> header file. */
/* #undef HAVE_WIFI_WLPACKETSOURCE_H */

/* wsp100 remote sensor support */
#define HAVE_WSP100 1

/* wtap_read takes two int * parameters */
/* #undef HAVE_WTAPREAD_INTINT */

/* wiretap functions takesfour parameters */
/* #undef HAVE_WTAP_ARGQUAD */

/* system state directory */
#define LOCALSTATE_DIR "/tmp/kismet/var"

/* Define to 1 if `lstat' dereferences a symlink specified with a trailing
   slash. */
/* #undef LSTAT_FOLLOWS_SLASHED_SYMLINK */

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT ""

/* Define to the full name of this package. */
#define PACKAGE_NAME ""

/* Define to the full name and version of this package. */
#define PACKAGE_STRING ""

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME ""

/* Define to the version of this package. */
#define PACKAGE_VERSION ""

/* Define as the return type of signal handlers (`int' or `void'). */
#define RETSIGTYPE void

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* system config directory */
#define SYSCONF_LOC "/tmp/kismet/etc"

/* Compiling for Cygwin */
/* #undef SYS_CYGWIN */

/* Compiling for FreeBSD */
/* #undef SYS_FREEBSD */

/* Compiling for Linux OS */
#define SYS_LINUX 1

/* Compiling for OpenBSD */
/* #undef SYS_OPENBSD */

/* Define to 1 if you can safely include both <sys/time.h> and <time.h>. */
#define TIME_WITH_SYS_TIME 1

/* Define to 1 if your <sys/time.h> declares `struct tm'. */
/* #undef TM_IN_SYS_TIME */

/* Use local dumper code */
#define USE_LOCAL_DUMP 1

/* Define to 1 if your processor stores words with the most significant byte
   first (like Motorola and SPARC, unlike Intel and VAX). */
/* #undef WORDS_BIGENDIAN */

/* Number of bits in a file offset, on hosts where this is settable. */
/* #undef _FILE_OFFSET_BITS 64 */

/* Define for large files, on AIX-style hosts. */
/* #undef _LARGE_FILES */

/* Define to empty if `const' does not conform to ANSI C. */
/* #undef const */

/* Maximum number of characters in the status line */
#define STATUS_MAX 1024

/* Maximum number of channels - I've only ever heard of 14 being used. */
#define CHANNEL_MAX 14

/* Stupid ncurses */
#define NCURSES_NOMACROS

/* Number of hex pairs in a key */
#define WEPKEY_MAX 32

/* String length of a key */
#define WEPKEYSTR_MAX ((WEPKEY_MAX * 2) + WEPKEY_MAX)

/* Number of past alerts to queue for new clients */
#define ALERT_BACKLOG 50

/* system min isn't reliable */
#define kismin(x,y) ((x) < (y) ? (x) : (y))
#define kismax(x,y) ((x) > (y) ? (x) : (y))

// Timer slices per second
#define SERVER_TIMESLICES_SEC 10

/* Namespace */
using namespace std;
#define __STL_USE_NAMESPACES

#ifndef _
#define _(x) x
#endif

