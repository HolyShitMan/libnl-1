/**
 * \cond skip
 * vim:syntax=doxygen
 * \endcond

\mainpage

\section main_intro Introduction

libnl is a set of libraries to deal with the netlink protocol and some
of the high level protocols implemented on top of it. The goal is to
provide APIs on different levels of abstraction. The core library libnl
provides a fundamental set of functions to deal with sockets, construct
messages, and send/receive those messages. Additional high level interfaces
for several individual netlink protocols are provided in separate
libraries (e.g. "nl-route", "nl-genl", ...).

The library is designed to ensure that all components are optional, i.e.
even though the core library provides a caching system which allows to
easily manage objects of any kind, no application is required to use this
caching system if it has no need for it.

The library was developed and tested on 2.6.x and 3.x kernel releases. It
may or may not work with older kernel series. Also, although all netlink
protocols are required to maintain backwards compatibility, this has not
always achieved and undesired side effects can occur if a recent libnl
version is used with a considerably older kernel.

\section main_toc Table of Contents

\section main_trees GIT Trees

\subsection tree_dev Development Tree

@code
git://git.infradead.org/users/tgr/libnl.git
@endcode
- Web: http://git.infradead.org/users/tgr/libnl.git

\section main_website Website

- https://www.infradead.org/~tgr/libnl/

\section main_mailinglist Mailinglist

Please post questions and patches to the libnl mailinglist:

@code
libnl@lists.infradead.org
@endcode

- Archives: https://lists.infradead.org/pipermail/libnl/

*/
