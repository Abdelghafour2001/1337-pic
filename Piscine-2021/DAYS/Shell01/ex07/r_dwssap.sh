# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    r_dwssap.sh                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Abdelghafour2001 <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/28 09:33:47 by Abdelghafour2001          #+#    #+#              #
#    Updated: 2021/11/28 09:33:49 by Abdelghafour2001         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

cat /etc/passwd | grep -v "#" | awk "NR%2==0" | awk -F: '{print $1}' | rev | sort -r | sed -n "$FT_LINE1,$FT_LINE2 p" | tr '\n' ',' | sed 's/,/, /g' | sed 's/, $/./' | xargs -I{} echo -n {}
