#!/bin/bash
sed "s/pierre-jean/Marvin The Martian/" | sed "s/steven1/Daffy Duck/" | sed "s/theo1/Wile E. Coyote/" | sed "s/arnaud1/Porky Pig/" | grep -e "Marvin The Martian" -e "Daffy Duck" -e "Wile E. Coyote" -e "Porky Pig"
