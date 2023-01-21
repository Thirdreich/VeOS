using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using VlaicuOS.Graphics;

namespace VlaicuOS.Commands
{
    public class launchdesktop : Command
    {
        public launchdesktop(String name) : base(name) { }

        public override string execute(String[] args) {
            if (Kernel.gui!= null)
                return "You are alerady in GUI!";

            Kernel.gui = new GUI();

            return "Gui is launched!";
        }

    }
}
