IF (BUILD_AMULECMD)
	CHECK_MANPAGE ("amulecmd")
ENDIF (BUILD_AMULECMD)

IF (BUILD_DAEMON)
	CHECK_MANPAGE ("amuled")
ENDIF (BUILD_DAEMON)

IF (BUILD_ED2K)
	CHECK_MANPAGE ("ed2k")
ENDIF (BUILD_ED2K)

IF (BUILD_MONOLITHIC)
	CHECK_MANPAGE ("amule")
ENDIF (BUILD_MONOLITHIC)

IF (BUILD_REMOTEGUI)
	CHECK_MANPAGE ("amulegui")
ENDIF (BUILD_REMOTEGUI)

IF (BUILD_WEBSERVER)
	CHECK_MANPAGE ("amuleweb")
ENDIF (BUILD_WEBSERVER)