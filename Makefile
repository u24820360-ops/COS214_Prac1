flags= -g -std=c++11 -Werror -Wall
objects=AggregateByRegionStep.o BatchPipeline.o CheckpointManager.o Connector.o ConnectorFactory.o CsvConnector.o CsvFactory.o DeduplicateStep.o Pipeline.o PostgresConnector.o PostgresFactory.o RestApiConnector.o RestApiFactory.o RunCheckpoint.o StreamingPipeline.o Transformation.o TransformationRegistry.o main.o

AggregateByRegionStep.o : AggregateByRegionStep.h AggregateByRegionStep.cpp
	g++ $(flags) -c AggregateByRegionStep.cpp 

BatchPipeline.o : BatchPipeline.h BatchPipeline.cpp
	g++ $(flags) -c BatchPipeline.cpp

CheckpointManager.o : CheckpointManager.h CheckpointManager.cpp
	g++ $(flags) -c CheckpointManager.cpp

Connector.o : Connector.h Connector.cpp
	g++ $(flags) -c Connector.cpp

ConnectorFactory.o : ConnectorFactory.h ConnectorFactory.cpp
	g++ $(flags) -c ConnectorFactory.cpp

CsvConnector.o : CsvConnector.h CsvConnector.cpp
	g++ $(flags) -c CsvConnector.cpp

CsvFactory.o : CsvFactory.h CsvFactory.cpp
	g++ $(flags) -c CsvFactory.cpp

DeduplicateStep.o : DeduplicateStep.h DeduplicateStep.cpp
	g++ $(flags) -c DeduplicateStep.cpp

Pipeline.o : Pipeline.h Pipeline.cpp
	g++ $(flags) -c Pipeline.cpp

PostgresConnector.o : PostgresConnector.h PostgresConnector.cpp
	g++ $(flags) -c PostgresConnector.cpp

PostgresFactory.o : PostgresFactory.h PostgresFactory.cpp
	g++ $(flags) -c PostgresFactory.cpp

RestApiConnector.o : RestApiConnector.h RestApiConnector.cpp
	g++ $(flags) -c RestApiConnector.cpp

RestApiFactory.o : RestApiFactory.h RestApiFactory.cpp
	g++ $(flags) -c RestApiFactory.cpp

RunCheckpoint.o : RunCheckpoint.h RunCheckpoint.cpp
	g++ $(flags) -c RunCheckpoint.cpp

StreamingPipeline.o : StreamingPipeline.h StreamingPipeline.cpp
	g++ $(flags) -c StreamingPipeline.cpp

Transformation.o : Transformation.h Transformation.cpp
	g++ $(flags) -c Transformation.cpp

TransformationRegistry.o : TransformationRegistry.h TransformationRegistry.cpp
	g++ $(flags) -c TransformationRegistry.cpp

main.o : AggregateByRegionStep.h BatchPipeline.h CheckpointManager.h Connector.h ConnectorFactory.h CsvConnector.h CsvFactory.h DeduplicateStep.h Pipeline.h PostgresConnector.h PostgresFactory.h RestApiConnector.h RestApiFactory.h RunCheckpoint.h StreamingPipeline.h Transformation.h TransformationRegistry.h main.cpp
	g++ $(flags) -c main.cpp

main : $(objects)
	g++ $(flags) -o main $(objects)

all : main

run : main 
	./main

clean : 
	rm -f *.o main && clear 