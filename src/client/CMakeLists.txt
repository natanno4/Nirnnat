



###########################################

cmake_minimum_required(VERSION 3.8)
project(last)

set(CMAKE_CXX_STANDARD 98)

set(SOURCE_FILES src/client/reversiFiles/Point.cpp src/client/reversiFiles/Point.h src/client/reversiFiles/AIPlayer.cpp src/client/reversiFiles/AIPlayer.h src/client/reversiFiles/Board.cpp src/client/reversiFiles/Board.h src/client/reversiFiles/GameLogic.cpp src/client/reversiFiles/GameLogic.h src/client/reversiFiles/ConsoleDisplay.cpp src/client/reversiFiles/ConsoleDisplay.h src/client/reversiFiles/PlayerSender.cpp src/client/reversiFiles/PlayerSender.h src/client/reversiFiles/DisplayOnlineGame.cpp src/client/reversiFiles/DisplayOnlineGame.h src/client/settings.txt
        src/client/reversiFiles/GameFlow.cpp src/client/reversiFiles/GameFlow.h src/client/reversiFiles/StandardLogic.cpp src/client/reversiFiles/StandardLogic.h src/client/reversiFiles/Player.cpp src/client/reversiFiles/Player.h src/client/reversiFiles/StandardPlayer.h src/client/reversiFiles/StandardPlayer.cpp src/client/reversiFiles/ConsoleMenu.h src/client/reversiFiles/ConsoleMenu.cpp src/client/reversiFiles/GameDisplay.cpp src/client/reversiFiles/GameDisplay.h src/client/reversiFiles/Client.cpp src/client/reversiFiles/Client.h src/client/reversiFiles/Client.cpp src/client/reversiFiles/Client.h src/client/reversiFiles/Client.cpp src/client/reversiFiles/Client.h src/client/reversiFiles/RemotePlayer.cpp src/client/reversiFiles/RemotePlayer.h )

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -lpthread")
add_subdirectory(src/client/lib/googletest-master)
include_directories(src/client/lib/googletest-master)
include_directories(src/client/lib/googletest-master)

set(TEST_FILES src/client/test/test_standardLogic.cpp)
add_executable(last ${SOURCE_FILES} src/client/test/gtest_main.cpp src/client/reversiFiles/GameDisplay.cpp src/client/reversiFiles/GameDisplay.h )
add_executable(runMain ${SOURCE_FILES} src/client/reversiFiles/main.cpp src/client/reversiFiles/GameDisplay.cpp src/client/reversiFiles/GameDisplay.h src/client/reversiFiles/Client.cpp src/client/reversiFiles/Client.h src/client/reversiFiles/Client.cpp src/client/reversiFiles/Client.h src/client/reversiFiles/Client.cpp src/client/reversiFiles/Client.h src/client/reversiFiles/RemotePlayer.cpp src/client/reversiFiles/RemotePlayer.h src/client/reversiFiles/PlayerSender.cpp src/client/reversiFiles/PlayerSender.h src/client/settings.txt src/client/reversiFiles/OnlineStartGameMenu.cpp src/client/reversiFiles/OnlineStartGameMenu.h )
target_link_libraries(last gtest gtest_main pthread)
add_test(Tests src/client/test)