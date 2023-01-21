using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace VlaicuOS.Commands
{
    public class fetch : Command
    {

        public fetch(String name) : base(name) { }

        public override String execute(String[] args)
        {
            return "VlaicuOS BETA 8.0 Build 45";
        }

    }
}
