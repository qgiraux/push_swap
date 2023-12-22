#!/bin/bash

RED='\033[0;31m'
GREEN='\033[0;32m'
ORANGE='\033[0;33m'
NC='\033[0m'


echo "tests de param non numerique :"
OUTPUT=$(./push_swap "2 1 3 four 5" 2>&1)
if [ "$OUTPUT" = "error" ]; then
    	    echo -e "test $i : ${GREEN}$OUTPUT${NC}"
else
    	    echo -e "test $i : ${RED}KO${NC}"
fi
OUTPUT=$(./push_swap 2 1 3 four 5 2>&1)
if [ "$OUTPUT" = "error" ]; then
    	    echo -e "test $i : ${GREEN}$OUTPUT${NC}"
else
    	    echo -e "test $i : ${RED}KO${NC}"
fi

echo "tests de param dupliques :"
OUTPUT=$(./push_swap "2 1 3 3 5" 2>&1)
if [ "$OUTPUT" = "error" ]; then
    	    echo -e "test $i : ${GREEN}$OUTPUT${NC}"
else
    	    echo -e "test $i : ${RED}KO${NC}"
fi
OUTPUT=$(./push_swap 2 1 3 3 5 2>&1)
if [ "$OUTPUT" = "error" ]; then
    	    echo -e "test $i : ${GREEN}$OUTPUT${NC}"
else
    	    echo -e "test $i : ${RED}KO${NC}"
fi

echo "tests de param trop grands :"
OUTPUT=$(./push_swap "2 1 99999999999 3 5" 2>&1)
if [ "$OUTPUT" = "error" ]; then
    	    echo -e "test $i : ${GREEN}$OUTPUT${NC}"
else
    	    echo -e "test $i : ${RED}KO${NC}"
fi
OUTPUT=$(./push_swap 1 2 99999999999 3 5 2>&1)
if [ "$OUTPUT" = "error" ]; then
    	    echo -e "test $i : ${GREEN}$OUTPUT${NC}"
else
    	    echo -e "test $i : ${RED}KO${NC}"
fi

echo "tests aucun param:"
OUTPUT=$(./push_swap)
ERROUTPUT=$(./push_swap 2>&1)
if [ -z "$OUTPUT" ] && [ -z "$ERROUTPUT" ]; then
    	    echo -e "test $i : ${GREEN}OK${NC}"
else
    	    echo -e "test $i : ${RED}KO${NC}"
fi

echo "tests de 1 seul nombre :"
OUTPUT=$(./push_swap "42" )
ERROUTPUT=$(./push_swap "42" 2>&1)
if [ -z "$OUTPUT" ] && [ -z "$ERROUTPUT" ]; then
    	    echo -e "test $i : ${GREEN}OK${NC}"
else
    	    echo -e "test $i : ${RED}KO${NC}"
fi
OUTPUT=$(./push_swap 42 )
if [ "$OUTPUT" = "" ]; then
    	    echo -e "test $i : ${GREEN}OK${NC}"
else
    	    echo -e "test $i : ${RED}KO${NC}"
fi

echo "tests de liste rangee :"
OUTPUT=$(./push_swap "0 1 2 3 4 5" )
ERROUTPUT=$(./push_swap "0 1 2 3 4 5"2>&1)
if [ -z "$OUTPUT" ] && [ -z "$ERROUTPUT" ]; then
    	    echo -e "test $i : ${GREEN}OK${NC}"
else
    	    echo -e "test $i : ${RED}KO${NC}"
fi
OUTPUT=$(./push_swap 0 1 2 3 4 5 )
ERROUTPUT=$(./push_swap 0 1 2 3 4 5 2>&1)
if [ -z "$OUTPUT" ] && [ -z "$ERROUTPUT" ]; then
    	    echo -e "test $i : ${GREEN}OK${NC}"
else
    	    echo -e "test $i : ${RED}KO${NC}"
fi

N=3
echo "tests pour random $N val"
for i in {1..5}; do
		ARG="$(seq 1 $N | shuf)" 
		OUTPUT=$(./push_swap $ARG | ./checker_OS $ARG)
		STEPS=$(./push_swap $ARG | wc -l)

		if [ "$OUTPUT" = "OK" ]; then
    	    echo -e "test $i : ${GREEN}$OUTPUT${NC}"
    	else
    	    echo -e "test $i : ${RED}$OUTPUT${NC}"
    	fi

		if [ "$STEPS" -lt 4 ]; then
	    	echo -e "     steps : ${GREEN}$STEPS${NC}"
		else
	    	echo -e "     steps : ${RED}$STEPS${NC}"
		fi
done

N=5
echo "tests pour random $N val"
for i in {1..5}; do
		ARG="$(seq 1 $N | shuf)" 
		OUTPUT=$(./push_swap $ARG | ./checker_OS $ARG)
		STEPS=$(./push_swap $ARG | wc -l)

		if [ "$OUTPUT" = "OK" ]; then
    	    echo -e "test $i : ${GREEN}$OUTPUT${NC}"
    	else
    	    echo -e "test $i : ${RED}$OUTPUT${NC}"
    	fi

		if [ "$STEPS" -lt 9 ]; then
	    	echo -e "     steps : ${GREEN}$STEPS${NC}"
		elif [ "$STEPS" -ge 8 ] && [ "$STEPS" -le 13 ]; then
	    	echo -e "     steps : ${ORANGE}$STEPS${NC}"
		else
	    	echo -e "     steps : ${RED}$STEPS${NC}"
		fi
done

N=100
echo "tests pour random $N val"
for i in {1..5}; do
		ARG="$(seq 1 $N | shuf)" 
		OUTPUT=$(./push_swap $ARG | ./checker_OS $ARG)
		STEPS=$(./push_swap $ARG | wc -l)

		if [ "$OUTPUT" = "OK" ]; then
    	    echo -e "test $i : ${GREEN}$OUTPUT${NC}"
    	else
    	    echo -e "test $i : ${RED}$OUTPUT${NC}"
    	fi

		if [ "$STEPS" -lt 701 ]; then
	    	echo -e "     steps : ${GREEN}$STEPS${NC}"
		elif [ "$STEPS" -ge 700 ] && [ "$STEPS" -le 1501 ]; then
	    	echo -e "     steps : ${ORANGE}$STEPS${NC}"
		else
	    	echo -e "     steps : ${RED}$STEPS${NC}"
		fi
done

N=500
echo "tests pour random $N val"
for i in {1..5}; do
		ARG="$(seq 1 $N | shuf)" 
		OUTPUT=$(./push_swap $ARG | ./checker_OS $ARG)
		STEPS=$(./push_swap $ARG | wc -l)

		if [ "$OUTPUT" = "OK" ]; then
    	    echo -e "test $i : ${GREEN}$OUTPUT${NC}"
    	else
    	    echo -e "test $i : ${RED}$OUTPUT${NC}"
    	fi

		if [ "$STEPS" -lt 5501 ]; then
	    	echo -e "     steps : ${GREEN}$STEPS${NC}"
		elif [ "$STEPS" -ge 5500 ] && [ "$STEPS" -le 11500 ]; then
	    	echo -e "     steps : ${ORANGE}$STEPS${NC}"
		else
	    	echo -e "     steps : ${RED}$STEPS${NC}"
		fi
done
