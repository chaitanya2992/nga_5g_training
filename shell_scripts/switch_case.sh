#! bin/bash/


read -p "Enter input: " input

case $input in
	start|run)
		echo "Starting system"
		;;
	stop|Stop|exit)
		echo "Stopping system"
		;;
	restart|Restart)
		echo "Restarting system"
		;;
	*)
		echo "Invalid input"
		;;
esac

exit 0

