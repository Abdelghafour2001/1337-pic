# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    exo3.sh                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Abdelghafour2001 <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/28 09:31:42 by Abdelghafour2001          #+#    #+#              #
#    Updated: 2021/11/28 09:31:43 by Abdelghafour2001         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/bash 

# Kerberos authentification.
klist > klist.txt
ls -l
cat klist.txt
