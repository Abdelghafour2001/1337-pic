# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    git_commit.sh                                      :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Abdelghafour2001 <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/28 09:31:54 by Abdelghafour2001          #+#    #+#              #
#    Updated: 2021/11/28 09:31:55 by Abdelghafour2001         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

git log --pretty=oneline | head -n 5 | awk '{print $1}'
