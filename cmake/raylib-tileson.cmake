include(FetchContent)

set(LIB_NAME "raylib-tileson")
message("Fetch Content: " ${LIB_NAME})

FetchContent_Declare(
    ${LIB_NAME}
    GIT_REPOSITORY  https://github.com/RobLoach/raylib-tileson.git
    GIT_TAG         v4.2.0
    GIT_PROGRESS    TRUE
)

FetchContent_MakeAvailable(${LIB_NAME})
set_property(TARGET ${LIB_NAME} PROPERTY CXX_STANDARD 17)