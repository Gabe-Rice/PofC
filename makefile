
final: main.o Borg.o Character.o Edges.o EnterpriseSpace.o FireSwampSpace.o Frodo.o Gyro.o GyroRoom.o MinionLair.o Orc.o PassRoom.o Paths2.o Paths3.o Paths.o PlayAgain.o RandNum.o Rous2.o Rous.o SharpStick.o Space.o StartGame.o StartSpace.o Trees.o TreeTrunk.o Wand.o WindOfEchos.o
	g++ main.o Borg.o Character.o Edges.o EnterpriseSpace.o FireSwampSpace.o Frodo.o Gyro.o GyroRoom.o MinionLair.o Orc.o PassRoom.o Paths2.o Paths3.o Paths.o PlayAgain.o RandNum.o Rous2.o Rous.o SharpStick.o Space.o StartGame.o StartSpace.o Trees.o TreeTrunk.o Wand.o WindOfEchos.o -o final

main.o: main.cpp
	g++ -c main.cpp

Borg.o: Borg.cpp Borg.hpp
	g++ -c Borg.cpp

Character.o: Character.cpp Character.hpp
	g++ -c Character.cpp

Edges.o: Edges.cpp Edges.hpp
	g++ -c Edges.cpp

EnterpriseSpace.o: EnterpriseSpace.cpp EnterpriseSpace.hpp
	g++ -c EnterpriseSpace.cpp

FireSwampSpace.o: FireSwampSpace.cpp FireSwampSpace.hpp
	g++ -c FireSwampSpace.cpp

Frodo.o: Frodo.cpp Frodo.hpp
	g++ -c Frodo.cpp

Gyro.o: Gyro.cpp Gyro.hpp
	g++ -c Gyro.cpp

GyroRoom.o: GyroRoom.cpp GyroRoom.hpp
	g++ -c GyroRoom.cpp

MinionLair.o: MinionLair.cpp MinionLair.hpp
	g++ -c MinionLair.cpp

Orc.o: Orc.cpp Orc.hpp
	g++ -c Orc.cpp

PassRoom.o: PassRoom.cpp PassRoom.hpp
	g++ -c PassRoom.cpp

Paths2.o: Paths2.cpp Paths2.hpp
	g++ -c Paths2.cpp

Paths3.o: Paths3.cpp Paths3.hpp
	g++ -c Paths3.cpp

Paths.o: Paths.cpp Paths.hpp
	g++ -c Paths.cpp

PlayAgain.o: PlayAgain.cpp PlayAgain.hpp
	g++ -c PlayAgain.cpp

RandNum.o: RandNum.cpp RandNum.hpp
	g++ -c RandNum.cpp

Rous.o: Rous.cpp Rous.hpp
	g++ -c Rous.cpp

Rous2.o: Rous2.cpp Rous2.hpp
	g++ -c Rous2.cpp

SharpStick.o: SharpStick.cpp SharpStick.hpp
	g++ -c SharpStick.cpp

Space.o: Space.cpp Space.hpp
	g++ -c Space.cpp

StartGame.o: StartGame.cpp StartGame.hpp
	g++ -c StartGame.cpp

StartSpace.o: StartSpace.cpp StartSpace.hpp
	g++ -c StartSpace.cpp

Trees.o: Trees.cpp Trees.hpp
	g++ -c Trees.cpp

TreeTrunk.o: TreeTrunk.cpp TreeTrunk.hpp
	g++ -c TreeTrunk.cpp

Wand.o: Wand.cpp Wand.hpp
	g++ -c Wand.cpp

WindOfEchos.o: WindOfEchos.cpp WindOfEchos.hpp
	g++ -c WindOfEchos.cpp

clean:
	rm *.o final
