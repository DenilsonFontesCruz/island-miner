find_package(SFML COMPONENTS graphics system window QUIET)
if (NOT SFML_FOUND)
    include(FetchContent)

    set(LIB_NAME "SFML")
    message("Fetch Content: " ${LIB_NAME})

    FetchContent_Declare(
        ${LIB_NAME}
        GIT_REPOSITORY  https://github.com/SFML/SFML.git
        GIT_TAG         2.6.0
        GIT_PROGRESS    TRUE
    )

    FetchContent_MakeAvailable(${LIB_NAME})
endif()
